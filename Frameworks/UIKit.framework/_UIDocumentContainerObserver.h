/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableSet, NSOrderedSet, NSDate, NSPredicate, NSMutableDictionary;

@interface _UIDocumentContainerObserver : NSObject  {
    NSMutableSet *_added;
    NSMutableSet *_removed;
    NSMutableDictionary *_moved;
    NSArray *_descriptors;
    NSOrderedSet *_lastSnapshot;
    NSDate *_lastSnapshotDate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSPredicate *_predicate;
}

@property(copy) NSArray * descriptors;
@property(retain) NSOrderedSet * lastSnapshot;
@property(retain) NSDate * lastSnapshotDate;
@property(copy) id handler;
@property(retain) NSPredicate * predicate;

+ (id)_observerForDirectories:(id)arg1 sortedWithDescriptors:(id)arg2 updateHandler:(id)arg3;

- (void)setPredicate:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)dealloc;
- (id)lastSnapshot;
- (void)setDescriptors:(id)arg1;
- (void)setLastSnapshotDate:(id)arg1;
- (void)setLastSnapshot:(id)arg1;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2;
- (id)descriptors;
- (id)lastSnapshotDate;
- (id)_predicateForItemsInDirectory:(id)arg1;
- (id)initWithDirectories:(id)arg1 sortDescriptors:(id)arg2 handler:(id)arg3;
- (void)moveURL:(id)arg1 toURL:(id)arg2;
- (void)removeURL:(id)arg1;
- (void)processResults:(id)arg1;
- (void)addURL:(id)arg1;
- (id)handler;
- (id)predicate;

@end
