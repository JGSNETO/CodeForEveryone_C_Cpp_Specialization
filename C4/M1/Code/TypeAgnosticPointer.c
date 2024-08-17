void print_value(void* value, char type){
    if (type == 'i'){
        printf("%d\n", *(int*)value);
    } else if (type == 'f') {
        printf("%d\n", *(float*)value);
    }
}

int main(){
    int i = 42;
    float f = 3.14;
    print_value(&i, 'i');
    print_value(&f, 'f');
    return 0;
}