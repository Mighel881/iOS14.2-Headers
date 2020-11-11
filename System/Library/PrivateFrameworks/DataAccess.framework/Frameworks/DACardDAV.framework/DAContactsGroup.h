/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DACardDAV/DAGroup.h>

@class CNMutableGroup, NSString;

@interface DAContactsGroup : NSObject <DAGroup> {

	BOOL _markedForDeletion;
	CNMutableGroup* _group;

}

@property (nonatomic,readonly) CNMutableGroup * group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExternalIdentifier:(id)arg1 ;
-(BOOL)isGroup;
-(BOOL)isContact;
-(int)legacyIdentifier;
-(id)externalUUID;
-(void)setETag:(id)arg1 ;
-(void)setExternalUUID:(id)arg1 ;
-(id)externalIdentifier;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(void)markForDeletion;
-(CNMutableGroup *)group;
-(id)eTag;
-(id)initWithGroup:(id)arg1 ;
-(id)asGroup;
-(BOOL)isContainer;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(void*)asABGroup;
@end
