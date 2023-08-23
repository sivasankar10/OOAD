
#ifndef APP_H
#define APP_H

#include <string>

/**
  * class APP
  * 
  */

class APP
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  APP ();

  /**
   * Empty Destructor
   */
  virtual ~APP ();

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
  void check_ ()
  {
  }


  /**
   */
  void check ()
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

  void register;
  void fill_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of register
   * @param new_var the new value of register
   */
  void setRegister (void new_var)   {
      register = new_var;
  }

  /**
   * Get the value of register
   * @return the value of register
   */
  void getRegister ()   {
    return register;
  }

  /**
   * Set the value of fill_details
   * @param new_var the new value of fill_details
   */
  void setFill_details (void new_var)   {
      fill_details = new_var;
  }

  /**
   * Get the value of fill_details
   * @return the value of fill_details
   */
  void getFill_details ()   {
    return fill_details;
  }
private:


  void initAttributes () ;

};

#endif // APP_H
