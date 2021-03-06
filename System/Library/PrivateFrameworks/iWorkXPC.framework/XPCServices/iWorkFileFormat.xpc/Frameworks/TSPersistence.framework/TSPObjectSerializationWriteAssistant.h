/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPEncoderWriteCoordinatorDelegate.h>

@class TSPObjectContext, NSUUID, NSString;

@interface TSPObjectSerializationWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate> {

	TSPObjectContext* _context;
	NSUUID* _documentUUID;
	NSUUID* _versionUUID;
	BOOL _serializeWeakAsStrongReferences;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)objectTargetType;
-(long long)componentWriterMode;
-(id)createMetadataForRootObject:(id)arg1 readVersion:(unsigned long long)arg2 dataArchiver:(id)arg3 archivedObjects:(id)arg4 componentObjectUUIDMap:(id)arg5 externalReferences:(id)arg6 weakExternalReferences:(id)arg7 lazyReferences:(id)arg8 dataReferences:(id)arg9 error:(id*)arg10 ;
-(BOOL)skipMetadataObjectSerialization;
-(id)initWithContext:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3 ;
-(void)encodeObject:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

