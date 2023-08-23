
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

  void _service;
  void _rules;
  void _proof;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of _rules
   * @param new_var the new value of _rules
   */
  void set_rules (void new_var)   {
      _rules = new_var;
  }

  /**
   * Get the value of _rules
   * @return the value of _rules
   */
  void get_rules ()   {
    return _rules;
  }

  /**
   * Set the value of _proof
   * @param new_var the new value of _proof
   */
  void set_proof (void new_var)   {
      _proof = new_var;
  }

  /**
   * Get the value of _proof
   * @return the value of _proof
   */
  void get_proof ()   {
    return _proof;
  }
private:


  void initAttributes () ;

};

#endif // BANK_H
