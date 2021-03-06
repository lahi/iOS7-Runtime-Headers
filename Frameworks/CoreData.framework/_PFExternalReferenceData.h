/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData, NSString;

@interface _PFExternalReferenceData : NSData  {
    NSData *_originalData;
    void *_bytesPtrForStore;
    unsigned int _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned int _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id _ubiquitousLocation;
    struct __externalDataFlags { 
        unsigned int _isStoredExternally : 1; 
        unsigned int _hasMappedData : 1; 
        unsigned int _cleanupOnDealloc : 1; 
        unsigned int _dataProtectionLevel : 3; 
        unsigned int _isStoredUbiquitously : 1; 
        unsigned int _createdByUbiquityImport : 1; 
        unsigned int _reserved : 24; 
    } _externalDataFlags;
}

+ (BOOL)_reserveMapFileDescriptor;
+ (BOOL)_releaseReservedMapFileDescriptor;
+ (BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)arg1;

- (id)_externalReferenceLocationString;
- (void)_setBytesForExternalReference:(const void*)arg1;
- (id)initForUbiquityDictionary:(id)arg1 store:(id)arg2;
- (BOOL)_isEqualHelper:(id)arg1;
- (const void*)_retrieveExternalData;
- (id)_exceptionForReadError:(id)arg1;
- (BOOL)_attemptToMapData:(id*)arg1;
- (const void*)_bytesPtrForExternalReference;
- (void)_doCleanup;
- (id)constructSafeguardStringFromString:(id)arg1;
- (unsigned int)_bytesLengthForStore;
- (const void*)_bytesPtrForStore;
- (id)databaseValue;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (void)_moveExternalReferenceToPermanentLocation;
- (void)_writeExternalReferenceToInterimLocation;
- (id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4;
- (BOOL)_createdByUbiquityImport;
- (id)initWithStoreBytes:(const void*)arg1 length:(unsigned int)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6;
- (id)initWithStoreBytes:(const void*)arg1 length:(unsigned int)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5;
- (id)externalReferenceLocationString;
- (id)_safeguardLocationString;
- (void)doCleanupOnDealloc;
- (unsigned int)_bytesLengthForExternalReference;
- (int)preferredProtectionLevel;
- (const char *)_safeguardLocation;
- (id)_originalData;
- (const char *)_externalReferenceLocation;
- (BOOL)hasExternalReferenceContent;
- (unsigned int)length;
- (BOOL)isEqual:(id)arg1;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (const void*)bytes;
- (id)mutableCopy;
- (void)finalize;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)UUID;
- (id)filename;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (BOOL)isEqualToData:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
