abstract class instrument {
    abstract void play();
}

class piano extends instrument {
    void play() {
        System.out.println("Piano is playing tan tan tan tan");
    }
}

class flute extends instrument {
    void play() {
        System.out.println("Flute is playing toot toot toot toot");
    }
}

class guitar extends instrument {
     void play() {
        System.out.println("Guitar is playing tin tin tin tin");
    }
}

class inst {
    public static void main(String[] args) {
        instrument ins[] = new instrument[10];
        for (int i = 0; i < 10; i++) {
            if (i == 1 || i == 5 || i == 9) ins[i] = new piano();
            else if (i == 3 || i == 4 || i == 7) ins[i] = new flute();
            else ins[i] = new guitar();
            ins[i].play();
            if (ins[i] instanceof piano) System.out.println("InstanceOf Piano");
            else if (ins[i] instanceof flute) System.out.println("InstanceOf Flute");
            else System.out.println("InstanceOf Guitar");
            System.out.println();
        }
    } 
}