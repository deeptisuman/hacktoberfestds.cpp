void swapNode(call * &head, call * &first, call * &second){
    call * firstPrev = NULL;
    call * secPrev = NULL;
    call * current = head;

    //set previous for first
    while((current->next != first) ){
        current = current->next;
    }

    firstPrev = current;
    current = head;

    //set previous for second
    while((current->next != second) ){
        current = current->next;
    }

    secPrev = current;
    current = second->next;

    //set firstPrev-> next to second
    firstPrev->next = second;
    //set secPrev->next to first
    secPrev->next = first;
    //set second->next = first->next
    second->next = first->next;
    //set first->next to current
    first->next = current;

    current = head;
    while(current->next != NULL){
        cout << current->number << endl;
        current = current->next;
    }

    cout << current->number << endl;
}
EDIT: I now have this as my swap part, but it still doesn't seem to work correctly

//swap firstPrev-> next with second->next
tmp = firstPrev->next;
second->next = firstPrev->next;
second->next = tmp;
//swap swap first->next with second->next
tmp = first->next;
second->next = first->next;
second->next = tmp;
