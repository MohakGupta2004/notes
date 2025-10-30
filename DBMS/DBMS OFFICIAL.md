#### File system vs DBMS
	- Data access: File system unstructered. DBMS structured.
	- Data security: DBMS has proper data security.
	- Data Integrity: DBMS has rules on who can access the data.
	- Data inconsistency: DBMS doesn't have data inconsistency.
	- Concurrency: DBMS can handle multiple user saving data at a single time.

- Database has 3 level 
	- View Level: How we see the data in the front-end.
	- Logical Level: The ER diagram of the data.
	- Physical Level: Core coding level view.

- Instance and Schema 
	- Instance: A collection of data from the database at a particular time.
	- Schema: The structure of how data is being stored.


#### ER DRAWING
 **Entity**: An object which can be distinguished from other objects based on some attributes.
	example: In a table every row is an entity.

**Entity Set**: Entity set is an collection of entities. Defined as an rectangle box.

**Attributes**: The columns or the associated terms are called the attributes of an Entity. Generally denoted with eclipses.

**Relationship**: We generally denote relationship as diamond box.


#### Entity

**Weak Entity**: When an entity is dependent on another entity. The weak entity doesn't have a primary key of his own. The weak entity is represented by double rectangle.

**Strong Entity**: When an entity has it's own primary key then it's referred as Strong Entity. Denoted as single rectangle.

#### Attributes

**Key attribute**: Helps representing the primary keys. Denoted as underline.

**Composite Attribute**: An attribute which is composed of many other attribute is called Composite attribute. Name=> first_name, last_name. Here the name is the composite attribute and first_name and last_name are simple attribute.

**Multivalued Attribute**: An attribute which will going to have multiple value. Example: Someone's address. This represented by double circle.

**Derived Attribute**: An attribute which is derived from existing attribute. Example: getting the age from the birthdate. Denoted as dotted eclipse.

#### Cardinality
Cardinality is the number of times that denotes that an entity is participating into a relationship with another entity. In tables the no. of rows represents the cardinality.

**Cardinality ratio**: Cardinality ratio or Cardinality mapping, which represents the mapping of one entity set to another entity set.


















