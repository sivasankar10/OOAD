
#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

/**
  * class payment
  * 
  */

class payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  payment ();

  /**
   * Empty Destructor
   */
  virtual ~payment ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void add ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void payment_method;
  void cost_of_the_ride;
  void extra_charge;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of payment_method
   * @param new_var the new value of payment_method
   */
  void setPayment_method (void new_var)   {
      payment_method = new_var;
  }

  /**
   * Get the value of payment_method
   * @return the value of payment_method
   */
  void getPayment_method ()   {
    return payment_method;
  }

  /**
   * Set the value of cost_of_the_ride
   * @param new_var the new value of cost_of_the_ride
   */
  void setCost_of_the_ride (void new_var)   {
      cost_of_the_ride = new_var;
  }

  /**
   * Get the value of cost_of_the_ride
   * @return the value of cost_of_the_ride
   */
  void getCost_of_the_ride ()   {
    return cost_of_the_ride;
  }

  /**
   * Set the value of extra_charge
   * @param new_var the new value of extra_charge
   */
  void setExtra_charge (void new_var)   {
      extra_charge = new_var;
  }

  /**
   * Get the value of extra_charge
   * @return the value of extra_charge
   */
  void getExtra_charge ()   {
    return extra_charge;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
