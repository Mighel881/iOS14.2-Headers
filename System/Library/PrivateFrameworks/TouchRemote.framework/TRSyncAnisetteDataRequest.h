/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TRRequestMessage.h>

@class NSData;

@interface TRSyncAnisetteDataRequest : TRRequestMessage {

	NSData* _simData;

}

@property (nonatomic,copy) NSData * simData;              //@synthesize simData=_simData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)simData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setSimData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
