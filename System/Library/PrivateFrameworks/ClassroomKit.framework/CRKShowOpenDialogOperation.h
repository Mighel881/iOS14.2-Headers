/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/SFAirDropClassroomTransferDelegate.h>

@class NSSet, NSData, NSString, CRKAirDropTransferInfo, NSURL, SFAirDropClassroomTransferManager;

@interface CRKShowOpenDialogOperation : CATOperation <SFAirDropClassroomTransferDelegate> {

	NSSet* mURLs;
	BOOL mKeepOriginalFiles;
	NSData* mPreviewImageData;
	NSString* mSenderName;
	BOOL mAutoAccept;
	NSString* mSourceBundleIdentifier;
	NSString* mFilesDescription;
	NSSet* mAirDropItems;
	NSString* mTransferIdentifier;
	CRKAirDropTransferInfo* mTransferInfo;
	BOOL mTransferAccepted;
	BOOL mTransferFinished;
	NSURL* mTransferDirectoryURL;
	SFAirDropClassroomTransferManager* mTransferManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fakeBundleID;
-(BOOL)isAsynchronous;
-(void)main;
-(void)transferWithIdentifierWasAccepted:(id)arg1 ;
-(void)cancel;
-(void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2 ;
-(void)failWithError:(id)arg1 ;
-(id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5 sourceBundleIdentifier:(id)arg6 ;
-(id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5 sourceBundleIdentifier:(id)arg6 filesDescription:(id)arg7 ;
-(void)startTransfer;
-(void)transferDidStartWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3 ;
-(void)transferDidProgressWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3 ;
-(void)transferDidFinishWithSuccess:(BOOL)arg1 destinationPath:(id)arg2 error:(id)arg3 ;
-(void)succeedIfNeeded;
-(void)cleanupHiddenTransferItemsIfNeeded;
-(id)initWithFileURLs:(id)arg1 keepOriginalFiles:(BOOL)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(BOOL)arg5 ;
@end
