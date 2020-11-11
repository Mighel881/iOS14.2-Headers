/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSData, HMBModel;

@interface HMBLocalZoneRawUpdateEntry : HMFObject {

	NSData* _encoded;
	HMBModel* _model;

}

@property (nonatomic,retain) NSData * encoded;              //@synthesize encoded=_encoded - In the implementation block
@property (nonatomic,retain) HMBModel * model;              //@synthesize model=_model - In the implementation block
-(HMBModel *)model;
-(void)setModel:(HMBModel *)arg1 ;
-(NSData *)encoded;
-(id)initWithModel:(id)arg1 encoded:(id)arg2 ;
-(void)setEncoded:(NSData *)arg1 ;
@end
