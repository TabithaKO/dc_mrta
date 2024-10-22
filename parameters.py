USE_GPU = False
USE_GPU_GLOBAL = True
NUM_GPU = 1
NUM_META_AGENT = 8
LR = 1e-5
GAMMA = 1
DECAY_STEP = 2e3
RESET_OPT = False
EVALUATE = True
CURRICULUM_LEARNING = False
INCREASE_DIFFICULTY = 2000
SUMMARY_WINDOW = 8
DEMON_RATE = 0.5
IL_DECAY = -1e-5  # -1e-6 700k decay 0.5, -1e-5 70k decay 0.5, -1e-4 7k decay 0.5
AGENTS_RANGE = (10, 20)
TASKS_RANGE = (20, 50)
AGENT_PERCEPTION_RANGE = 10
COALITION_SIZE = 5
MAX_TIME = 100
TRAIT_DIM = 1
FOLDER_NAME = 'REINFORCE'
model_path = f'model/{FOLDER_NAME}'
train_path = f'train/{FOLDER_NAME}'
gifs_path = f'gifs/{FOLDER_NAME}'
LOAD_MODEL = False
SAVE_IMG = True
SAVE_IMG_GAP = 10000
WANDB_LOG = False

BATCH_SIZE = 1024
AGENT_INPUT_DIM = 7 + (AGENT_PERCEPTION_RANGE * AGENT_PERCEPTION_RANGE) #increased the dimensions from 6->7 because of capacity
TASK_INPUT_DIM = 5 #increased the dimensions from 5->6 because of task weight
EMBEDDING_DIM = 128
SAMPLE_SIZE = 200
PADDING_SIZE = 50
