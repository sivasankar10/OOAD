
#ifndef HOUSE_H
#define HOUSE_H

#include <string>

/**
  * class house
  * 
  */

class house
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  house ();

  /**
   * Empty Destructor
   */
  virtual ~house ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void cus_HS_NO;
  void cus_plot_number;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of cus_HS_NO
   * @param new_var the new value of cus_HS_NO
   */
  void setCus_HS_NO (void new_var)   {
      cus_HS_NO = new_var;
  }

  /**
   * Get the value of cus_HS_NO
   * @return the value of cus_HS_NO
   */
  void getCus_HS_NO ()   {
    return cus_HS_NO;
  }

  /**
   * Set the value of cus_plot_number
   * @param new_var the new value of cus_plot_number
   */
  void setCus_plot_number (void new_var)   {
      cus_plot_number = new_var;
  }

  /**
   * Get the value of cus_plot_number
   * @return the value of cus_plot_number
   */
  void getCus_plot_number ()   {
    return cus_plot_number;
  }
private:


  void initAttributes () ;

};

#endif // HOUSE_H
