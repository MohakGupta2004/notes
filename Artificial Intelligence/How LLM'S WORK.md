GPT means Generative Pretrained Transformer. 
This basically comes from the perspective where in 2017 google created the transformer model for google translation. There is a step in which how ChatGPT generate the content out of one input texts.

- **Tokenization**: GPT firstly tokenize the input. It basically chunks the input text into numbers.
Example:
	My name Mohak
	=> 200264, 17360, 200266, 5444, 1308, 31564, 422, 200265, 200264, 1428, 200266, 200265, 200264, 173781, 200266

- **Vector Embeddings**: The tokenizer then gets embedded as a vector. vector embeddings numerical representations of data—such as text, images, or audio—into a high-dimensional space, where similar items are positioned closer together
Example:
		"Play"  → [0.12, -0.88, 0.45, ...]  
		"ing"   → [0.02, 0.17, -0.59, ...]
		" football" → [-0.63, 1.25, 0.03, ...]

- **Positional encoding**: 
  Example: 
	 The dog chased cat
	 The cat chased dog
  As the words are same and the vector embeddings there is a posibility that both are same but to make sure that are not same positional encoding ensure to make a new matrix which eventually creates a different output for different positional statements.


- **Self Attention**:   In RNNs, every token is converted into an embedding, but tokens can only influence each other _sequentially_ through a hidden state — so context is often lost.
In contrast, **Self-Attention lets every token directly interact with all others**, allowing the model to capture meaning based on context.
Example:-
	_“It’s a **river** bank.”_ → “bank” attends more to “river” → **geographical meaning**     
	 _“It’s an **ICICI** bank.”_ → “bank” attends more to “ICICI” → **financial meaning**

- **Multi-head Attention**: Multi-Head Attention lets a Transformer look at a word from multiple angles at the same time so it can better understand its meaning in context.
Example: 
	"The cat sat on the mat because it was tired."

When understanding **“it”**, different attention heads can focus on:

| Head   | Focuses on                              |     |
| ------ | --------------------------------------- | --- |
| Head 1 | "cat" → figuring out who "it" refers to |     |
| Head 2 | "tired" → understanding the reason      |     |
| Head 3 | "mat" → checking position               |     |

Instead of relying on **just one guess**, the model **combines all these views**.

Then it repeats itself so that so it predicts the next word and then detokenize it.

![[Pasted image 20250929234911.png]]

https://jalammar.github.io/illustrated-transformer/