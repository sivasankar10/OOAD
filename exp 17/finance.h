
#ifndef FINANCE_H
#define FINANCE_H

#include <string>
#include vector



/**
  * class finance
  * 
  */

class finance
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  finance ();

  /**
   * Empty Destructor
   */
  virtual ~finance ();

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
  void pooling_of_funds ()
  {
  }


  /**
   */
  void economic_development ()
  {
  }


  /**
   */
  void bettre_decision_making ()
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

  void balance;
  void database;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of balance
   * @param new_var the new value of balance
   */
  void setBalance (void new_var)   {
      balance = new_var;
  }

  /**
   * Get the value of balance
   * @return the value of balance
   */
  void getBalance ()   {
    return balance;
  }

  /**
   * Set the value of database
   * @param new_var the new value of database
   */
  void setDatabase (void new_var)   {
      database = new_var;
  }

  /**
   * Get the value of database
   * @return the value of database
   */
  void getDatabase ()   {
    return database;
  }
private:


  void initAttributes () ;

};

#endif // FINANCE_H
