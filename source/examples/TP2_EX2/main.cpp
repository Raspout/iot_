#include "MicroBitMessageBus.h"
#include "MicroBitFiber.h"
#include "inc/neopixel.h"

// needed for fiber
MicroBitMessageBus bus;

int main()
{
  // Initialize bus for fiber
  scheduler_init(bus);

  Neopixel np(MICROBIT_PIN_P0, 2);
  np.clear();

  fiber_sleep(2000);


  while (1)
  {
    np.showColor(0, 0, 0, 255);
    fiber_sleep(250);
    np.showColor(0, 85, 85, 85);
    fiber_sleep(250);
    np.showColor(0, 255, 0, 0);
    fiber_sleep(250);
    np.showColor(0, 0, 0, 0);
    np.showColor(1, 0, 0, 255);
    fiber_sleep(250);
    np.showColor(1, 85, 85, 85);
    fiber_sleep(250);
    np.showColor(1, 255, 0, 0);
    fiber_sleep(250);
    np.showColor(1, 0, 0, 0);
  }
  



  release_fiber();
}