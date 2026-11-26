class Bank {
    
    double getInvestment() {
        return 0;
    }
}

class ICICI extends Bank {
    @Override
    double getInvestment() {
        return 7.0;
    }
}

class SBI extends Bank {
    @Override
    double getInvestment() {
        return 6.8;
    }
}

class IDBI extends Bank {
    @Override
    double getInvestment() {
        return 7.2;
    }
}

public class Pro24 {
    public static void main(String[] args) {
        double principal = 100000;  // amount invested
        int years = 2;              // time period
 
        Bank[] banks = { new ICICI(), new SBI(), new IDBI() };
        String[] names = { "ICICI", "SBI", "IDBI" };

        double maxInterest = 0;
        String maxBank = "";

        for (int i = 0; i < banks.length; i++) {
            double rate = banks[i].getInvestment();           // runtime polymorphism
            double interest = (principal * rate * years) / 100; // simple interest
            System.out.println(names[i] + " -> Rate: " + rate + "%, Interest: " + interest);

            if (interest > maxInterest) {
                maxInterest = interest;
                maxBank = names[i];
            }
        }

        System.out.println("\nMaximum interest is " + maxInterest + " from " + maxBank);
    }
}