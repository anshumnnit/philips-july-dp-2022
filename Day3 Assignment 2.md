Assignment - 2
public class OnlineCart
{
    public void CheckOut(PaymentType paymentType)
    {
        switch(paymentType)
        {
            case PaymentType.CreditCard:
                    ProcessCreditCardPayment();
                    break;
            case PaymentType.Paypal:
                    ProcessPaypalPayment();
                    break;
            case PaymentType.GoogleCheckout:
                    ProcessGooglePayment();break;
            case PaymentType.AmazonPayments:P
                    ProcessAmazonPayment();
                    break;
        }
    }
    private void ProcessCreditCardPayment()
    {
        Print("Credit card payment chosen");
    }
    private void ProcessPaypalPayment(){
        Print("Paypal payment chosen");
    }
    private void ProcessGooglePayment()
    {
        Print("Google payment chosen");
    }
    private void ProcessAmazonPayment()
    {
        Print("Amazon payment chosen");
    }
}

Observation:
SRP voilated.
IProcessPayment interface that will use Strategy to do different payments.
![image](https://user-images.githubusercontent.com/109504319/179927106-fef1d765-199d-45d5-84b8-aa8bba338917.png)

