/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REMDAChangedIdentifierResult.h>

@class NSUUID, NSString;

@interface REMDAAssignmentTombstone : NSObject <REMDAChangedIdentifierResult> {

	NSUUID* _objectIdentifier;
	NSUUID* _owningReminderIdentifier;

}

@property (nonatomic,retain) NSUUID * objectIdentifier;                      //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * owningReminderIdentifier;              //@synthesize owningReminderIdentifier=_owningReminderIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSUUID *)objectIdentifier;
-(NSUUID *)owningReminderIdentifier;
-(void)setOwningReminderIdentifier:(NSUUID *)arg1 ;
-(void)setObjectIdentifier:(NSUUID *)arg1 ;
@end
