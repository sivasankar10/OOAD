
#ifndef EXAMINATION_H
#define EXAMINATION_H

#include <string>

/**
  * class examination
  * 
  */

class examination
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  examination ();

  /**
   * Empty Destructor
   */
  virtual ~examination ();

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
  void figure_out_eligible_candidate ()
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

  void name;
  void signature;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of signature
   * @param new_var the new value of signature
   */
  void setSignature (void new_var)   {
      signature = new_var;
  }

  /**
   * Get the value of signature
   * @return the value of signature
   */
  void getSignature ()   {
    return signature;
  }
private:


  void initAttributes () ;

};

#endif // EXAMINATION_H
