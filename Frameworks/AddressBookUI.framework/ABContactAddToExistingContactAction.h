/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact, ABPeoplePickerNavigationController;

@interface ABContactAddToExistingContactAction : ABContactAction <ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate> {
    CNContact *_chosenContact;
    ABPeoplePickerNavigationController *_peoplePicker;
}

@property(retain) CNContact * chosenContact;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;


- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (id)chosenContact;
- (void)setChosenContact:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)dealloc;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (id)peoplePicker;

@end
