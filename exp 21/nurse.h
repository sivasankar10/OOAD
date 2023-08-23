
#ifndef NURSE_H
#define NURSE_H
#include "hospitalstaff.h"

#include <string>

/**
  * class nurse
  * 
  */

class nurse : public hospitalstaff
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  nurse ();

  /**
   * Empty Destructor
   */
  virtual ~nurse ();

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
  void getinfo ()
  {
  }


  /**
   */
  void assign_to_doctor ()
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

  void headdoctor_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of headdoctor_
   * @param new_var the new value of headdoctor_
   */
  void setHeaddoctor_ (void new_var)   {
      headdoctor_ = new_var;
  }

  /**
   * Get the value of headdoctor_
   * @return the value of headdoctor_
   */
  void getHeaddoctor_ ()   {
    return headdoctor_;
  }
private:


  void initAttributes () ;

};

#endif // NURSE_H
