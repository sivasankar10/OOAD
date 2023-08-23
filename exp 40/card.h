
#ifndef CARD_H
#define CARD_H

#include <string>

/**
  * class card
  * 
  */

class card
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  card ();

  /**
   * Empty Destructor
   */
  virtual ~card ();

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

  void no;
  void type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of no
   * @param new_var the new value of no
   */
  void setNo (void new_var)   {
      no = new_var;
  }

  /**
   * Get the value of no
   * @return the value of no
   */
  void getNo ()   {
    return no;
  }

  /**
   * Set the value of type
   * @param new_var the new value of type
   */
  void setType (void new_var)   {
      type = new_var;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  void getType ()   {
    return type;
  }
private:


  void initAttributes () ;

};

#endif // CARD_H
