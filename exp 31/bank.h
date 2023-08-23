
#ifndef BANK_H
#define BANK_H

#include <string>

/**
  * class bank
  * 
  */

class bank
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  bank ();

  /**
   * Empty Destructor
   */
  virtual ~bank ();

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
  void _update_ ()
  {
  }


  /**
   */
  void _add ()
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

  void _loan_amount;
  void _date;
  void _duration;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _loan_amount
   * @param new_var the new value of _loan_amount
   */
  void set_loan_amount (void new_var)   {
      _loan_amount = new_var;
  }

  /**
   * Get the value of _loan_amount
   * @return the value of _loan_amount
   */
  void get_loan_amount ()   {
    return _loan_amount;
  }

  /**
   * Set the value of _date
   * @param new_var the new value of _date
   */
  void set_date (void new_var)   {
      _date = new_var;
  }

  /**
   * Get the value of _date
   * @return the value of _date
   */
  void get_date ()   {
    return _date;
  }

  /**
   * Set the value of _duration
   * @param new_var the new value of _duration
   */
  void set_duration (void new_var)   {
      _duration = new_var;
  }

  /**
   * Get the value of _duration
   * @return the value of _duration
   */
  void get_duration ()   {
    return _duration;
  }
private:


  void initAttributes () ;

};

#endif // BANK_H
