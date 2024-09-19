#include "MonteCarlo.h"

#include <ctime>
#include <cstdlib>
#include <vector>
#include <utility>

using namespace std;

// Initialize the static constant
const int MonteCarlo::TrialNum = 1000;

double MonteCarlo::getScore(HexBoard& board, Player player)
{
    // Get the list of unoccupied positions
    auto unoccupied = board.getUnoccupied();
    auto perm = generatePermutation(unoccupied.size());

    int count = 0; // Count the player's winning times
    for (int n = 0; n < TrialNum; n++)
    {
        int turn = (player == Player::BLUE ? 0 : 1); // 0: BLUE's turn, 1: RED's turn
        adaptPermutation(perm); // Shuffle the permutation for random moves

        // Play random moves from the shuffled permutation
        for (int i = 0; i < perm.size(); i++)
        {
            turn = !turn; // Alternate turns
            int x = unoccupied[perm[i]].first;
            int y = unoccupied[perm[i]].second;
            if (turn) // RED's turn
            {
                board.placePiece(x, y, Player::RED);
            }
            else // BLUE's turn
            {
                board.placePiece(x, y, Player::BLUE);
            }
        }

        // Check if the current player has won the game
        if (board.win() == player)
        {
            count++;
        }

        // Undo all random moves
        for (const auto& pos : unoccupied)
        {
            board.undo(pos.first, pos.second);
        }
    }

    // Return the win ratio of the player
    return static_cast<double>(count) / TrialNum;
}

vector<int> MonteCarlo::generatePermutation(int n)
{
    vector<int> perm(n);

    // Generate a sequential permutation of indices
    for (int i = 0; i < n; i++)
    {
        perm[i] = i;
    }

    return perm;
}

void MonteCarlo::adaptPermutation(vector<int>& perm)
{
    // Shuffle the permutation using Fisher-Yates shuffle
    for (int i = perm.size(); i > 1; i--)
    {
        int choose = rand() % i;
        swap(perm[i - 1], perm[choose]); // Use standard swap function for better readability
    }
}
