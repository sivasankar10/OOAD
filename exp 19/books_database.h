
#ifndef BOOKS_DATABASE_H
#define BOOKS_DATABASE_H

#include <string>
#include vector



/**
  * class books_database
  * 
  */

class books_database
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  books_database ();

  /**
   * Empty Destructor
   */
  virtual ~books_database ();

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
  void update ()
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

  void title;
  void author;
  void book_id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of title
   * @param new_var the new value of title
   */
  void setTitle (void new_var)   {
      title = new_var;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  void getTitle ()   {
    return title;
  }

  /**
   * Set the value of author
   * @param new_var the new value of author
   */
  void setAuthor (void new_var)   {
      author = new_var;
  }

  /**
   * Get the value of author
   * @return the value of author
   */
  void getAuthor ()   {
    return author;
  }

  /**
   * Set the value of book_id
   * @param new_var the new value of book_id
   */
  void setBook_id (void new_var)   {
      book_id = new_var;
  }

  /**
   * Get the value of book_id
   * @return the value of book_id
   */
  void getBook_id ()   {
    return book_id;
  }
private:


  void initAttributes () ;

};

#endif // BOOKS_DATABASE_H
