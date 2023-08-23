
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
  void _add ()
  {
  }


  /**
   */
  void _update ()
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

  void _procedure;
  void _service;
  void _loan_availability;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _procedure
   * @param new_var the new value of _procedure
   */
  void set_procedure (void new_var)   {
      _procedure = new_var;
  }

  /**
   * Get the value of _procedure
   * @return the value of _procedure
   */
  void get_procedure ()   {
    return _procedure;
  }

  /**
   * Set the value of _service
   * @param new_var the new value of _service
   */
  void set_service (void new_var)   {
      _service = new_var;
  }

  /**
   * Get the value of _service
   * @return the value of _service
   */
  void get_service ()   {
    return _service;
  }

  /**
   * Set the value of _loan_availability
   * @param new_var the new value of _loan_availability
   */
  void set_loan_availability (void new_var)   {
      _loan_availability = new_var;
  }

  /**
   * Get the value of _loan_availability
   * @return the value of _loan_availability
   */
  void get_loan_availability ()   {
    return _loan_availability;
  }
private:


  void initAttributes () ;

};

#endif // BANK_H
