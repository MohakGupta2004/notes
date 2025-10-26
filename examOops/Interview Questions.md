### Blockchain

Hard bits:
-  Does private variables are actually private? => No. anyone can decode the values of the contract from the byte
- Where does the ethereum world state has been stored => The world state in Ethereum is stored in a **Merkle Patricia Trie (MPT)**, whose root hash is recorded in each block header. The trie itself is persisted in the client’s **LevelDB/RocksDB database**, mapping addresses to account states and contract storage.
- Explain what is the liquidity pool with a practical example (especially for JIT)
- World state and balances

Easy bits:
- Explain the proof of stake consensus mechanism
- Write a basic lottery contract in solidity.
- Validator hacking, is it possible?
- Can you explain what a 51% attack is and why it matters?
- What is the L1 scaling issue? How L2 solves it?