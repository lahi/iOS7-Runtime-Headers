/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableSet, NSObject<OS_dispatch_semaphore>, NSLock, <MFSQLiteConnectionPoolDelegate>;

@interface MFSQLiteConnectionPool : NSObject  {
    <MFSQLiteConnectionPoolDelegate> *_delegate;
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned int _cacheSize;
    unsigned int _cacheGeneration;
    unsigned int _maxConcurrentBackgroundReaders;
    unsigned int _maxConcurrentWriters;
    NSLock *_checkoutLock;
    struct __CFDictionary { } *_checkoutMap;
    NSObject<OS_dispatch_semaphore> *_backgroundReaderSemaphore;
    int _backgroundReadersWaiting;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
    int _writersWaiting;
}

@property <MFSQLiteConnectionPoolDelegate> * delegate;
@property unsigned int cacheSize;
@property(readonly) unsigned int maxConcurrentBackgroundReaders;
@property(readonly) unsigned int maxConcurrentWriters;
@property(readonly) unsigned int backgroundReadersWaiting;
@property(readonly) unsigned int writersWaiting;


- (unsigned int)maxConcurrentBackgroundReaders;
- (unsigned int)backgroundReadersWaiting;
- (unsigned int)maxConcurrentWriters;
- (unsigned int)maxConcurrentReaders;
- (id)_semaphoreForConnectionType:(unsigned int)arg1 waitCounter:(int**)arg2;
- (id)_connectionWithType:(unsigned int)arg1;
- (id)backgroundReaderConnection;
- (unsigned int)writersWaiting;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned int)arg2;
- (void)checkInConnection:(id)arg1;
- (id)writerConnection;
- (id)readerConnection;
- (unsigned int)cacheSize;
- (void)setCacheSize:(unsigned int)arg1;
- (void)flush;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
