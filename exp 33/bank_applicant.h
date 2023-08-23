
#ifndef BANK_APPLICANT_H
#define BANK_APPLICANT_H

#include <string>

/**
  * class bank_applicant
  * 
  */

class bank_applicant
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  bank_applicant ();

  /**
   * Empty Destructor
   */
  virtual ~bank_applicant ();

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
  void _checks ()
  {
  }


  /**
   */
  void _create ()
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

  void _procedure_;
  void _verification;
  void _confrimation;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _procedure_
   * @param new_var the new value of _procedure_
   */
  void set_procedure_ (void new_var)   {
      _procedure_ = new_var;
  }

  /**
   * Get the value of _procedure_
   * @return the value of _procedure_
   */
  void get_procedure_ ()   {
    return _procedure_;
  }

  /**
   * Set the value of _verification
   * @param new_var the new value of _verification
   */
  void set_verification (void new_var)   {
      _verification = new_var;
  }

  /**
   * Get the value of _verification
   * @return the value of _verification
   */
  void get_verification ()   {
    return _verification;
  }

  /**
   * Set the value of _confrimation
   * @param new_var the new value of _confrimation
   */
  void set_confrimation (void new_var)   {
      _confrimation = new_var;
  }

  /**
   * Get the value of _confrimation
   * @return the value of _confrimation
   */
  void get_confrimation ()   {
    return _confrimation;
  }
private:


  void initAttributes () ;

};

#endif // BANK_APPLICANT_H
