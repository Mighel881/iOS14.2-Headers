/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPaymentTransaction;

@interface PKCloudRecordTransaction : PKCloudRecordObject {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)dateFormatter;
+(BOOL)supportsSecureCoding;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(id)item;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)description;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(PKPaymentTransaction *)transaction;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
@end
