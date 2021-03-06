/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityTransactionLog, PFUbiquityStoreSaveSnapshot;

@interface _PFUbiquityMigrationContext : NSObject  {
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;
    PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;
}

@property(retain) PFUbiquityTransactionLog * transactionLog;
@property(retain) PFUbiquityStoreSaveSnapshot * sourceStoreSaveSnapshot;
@property(retain) PFUbiquityStoreSaveSnapshot * destinationStoreSaveSnapshot;


- (id)sourceStoreSaveSnapshot;
- (id)transactionLog;
- (id)sourceGlobalObjectIDFromCompressedID:(id)arg1;
- (id)destinationStoreSaveSnapshot;
- (void)setDestinationStoreSaveSnapshot:(id)arg1;
- (void)setSourceStoreSaveSnapshot:(id)arg1;
- (void)setTransactionLog:(id)arg1;
- (void)dealloc;

@end
