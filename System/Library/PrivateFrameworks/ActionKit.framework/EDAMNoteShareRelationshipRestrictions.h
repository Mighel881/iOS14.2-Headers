/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteShareRelationshipRestrictions : FATObject {

	NSNumber* _noSetReadNote;
	NSNumber* _noSetModifyNote;
	NSNumber* _noSetFullAccess;

}

@property (nonatomic,retain) NSNumber * noSetReadNote;                //@synthesize noSetReadNote=_noSetReadNote - In the implementation block
@property (nonatomic,retain) NSNumber * noSetModifyNote;              //@synthesize noSetModifyNote=_noSetModifyNote - In the implementation block
@property (nonatomic,retain) NSNumber * noSetFullAccess;              //@synthesize noSetFullAccess=_noSetFullAccess - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)noSetFullAccess;
-(void)setNoSetFullAccess:(NSNumber *)arg1 ;
-(NSNumber *)noSetReadNote;
-(void)setNoSetReadNote:(NSNumber *)arg1 ;
-(NSNumber *)noSetModifyNote;
-(void)setNoSetModifyNote:(NSNumber *)arg1 ;
@end

