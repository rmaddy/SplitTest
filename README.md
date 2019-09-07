# SplitTest
Demonstration of iOS 13 UISplitViewController bug

When attempting to use `setViewControllers` on a `UISplitViewController` when the device is in compact width, the result is that only an empty split view controller is shown. Neither of the new view controllers are displayed. Rotating the device or other action that changes the width to regular instead of compact then shows the correct view controllers. And rotating back to compact width continues to show the correct results.

This problem is new to iOS 13 and still happens in beta 7. The attached code works just fine under iOS 12.

Attached is a sample app that fully demonstrates the issue. This project is created from the Master/Detail template with only minor changes:

- Update the master navigation controller to show the toolbar in Main.storyboard.
- In AppDelegate.m, give the split view controller a red background to make the problem obvious.
- In MasterViewController.m, add a "Reset" button in the toolbar.
- In MasterViewController.m, add a "resetAction" method that creates two empty table view controllers (with different background colors), add them to their own navigation controllers, and then update the split view controller's viewControllers property with the two new navigation controllers.

To see the problem, please take the following steps:

1. Build and run this sample app using any iOS 13 simulator or actual iOS device.
2. Get the demo app in a compact width (portrait iPhone, iPad portrait using 2/3 of the screen, or iPad landscape using 1/3 or 1/2 of the screen).
3. Tap the Reset button at the bottom of the master screen.
4. You now see the empty red split view controller view instead of the newly set view controllers. This is the problem.
5. Now rotate the device or give the app more screen size on the iPad such that the app is now in a regular width. The newly set view controllers now appear correctly.
6. Go back to a compact width and the newly added view controllers continue to appear correctly.

Perform these same set of steps using iOS 12 (or 11) and at step 4 you see the newly set view controllers as expected. It's only under iOS 13 that step 4 shows the wrong results.
