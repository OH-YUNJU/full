int checkeod(int x) {
        if(x == 0)
            return 3;
        else if(x % 2 == 0)
            return 1;
        else if(x % 2 != 0)
            return 2;
}