
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class CUSTOMER
  * 
  */

class CUSTOMER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CUSTOMER ();

  /**
   * Empty Destructor
   */
  virtual ~CUSTOMER ();

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
  void get_id ()
  {
  }


  /**
   */
  void get_name ()
  {
  }


  /**
   */
  void get_email ()
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

  void customer_id;
  void name;
  void number;
  void email;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of customer_id
   * @param new_var the new value of customer_id
   */
  void setCustomer_id (void new_var)   {
      customer_id = new_var;
  }

  /**
   * Get the value of customer_id
   * @return the value of customer_id
   */
  void getCustomer_id ()   {
    return customer_id;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of number
   * @param new_var the new value of number
   */
  void setNumber (void new_var)   {
      number = new_var;
  }

  /**
   * Get the value of number
   * @return the value of number
   */
  void getNumber ()   {
    return number;
  }

  /**
   * Set the value of email
   * @param new_var the new value of email
   */
  void setEmail (void new_var)   {
      email = new_var;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  void getEmail ()   {
    return email;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
