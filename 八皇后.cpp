void quene(char line, char * quene_array)
{
    int i;
    for (i = 0; i < 8; i++) {
        if (put_quene_judge(quene_array, line, i)) {
            quene_array[line] = i;                          
            line++;
        }
        else {
            continue;                                       
        }
        if (line == 8) {                                   
            num++;
            printf("The %d way is:\n", num);
            print_quene(quene_array);
        }
        else {
            quene(line, quene_array);                       
            line--;                                         
        }
    }
}
