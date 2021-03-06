/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NPSManager;

@interface IMDNDList : NSObject {

	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)sharedList;
-(id)init;
-(NPSManager *)syncManager;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToPairedDevice:(BOOL)arg4 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 syncToPairedDevice:(BOOL)arg3 ;
-(void)syncToPairedDeviceIncludingVersion:(BOOL)arg1 ;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(void)dealloc;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)groupHashForHandleIDs:(id)arg1 ;
-(id)groupHashForChat:(id)arg1 ;
-(id)currentList;
-(BOOL)isMutedChat:(id)arg1 ;
-(BOOL)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(BOOL)arg4 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(void)_handleDNDListChanged;
@end

