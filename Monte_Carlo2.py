from numpy.random import SeedSequence, default_rng
ss = SeedSequence(12345)

# Spawn off 10 child  SeedSequences to pass to child processes.
child_seeds = ss.spawn(10)  # create threads
streams = [default_rng(s) for s in child_seeds] # Check child_seeds values
grandchild = child_seeds[0].spawn(4)
grand_streams = [default_rng(s) for s in grandchild]
print(grandchild[0].pool)



