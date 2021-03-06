/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/CoreTelephonyClientSubscriberDelegateInternal.h>

@protocol CTSubscriberDelegate;
@class CoreTelephonyClient, CTServiceDescriptor, NSData, NSString;

@interface CTSubscriber : NSObject <CoreTelephonyClientSubscriberDelegateInternal> {

	queue* _queue;
	CoreTelephonyClient* _client;
	id<CTSubscriberDelegate> _delegate;
	CTServiceDescriptor* _descriptor;

}

@property (nonatomic,retain) CTServiceDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) NSData * carrierToken; 
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic,__weak) id<CTSubscriberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDescriptor:(CTServiceDescriptor *)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(void)authenticateWithInfo:(id)arg1 handleResult:(/*^block*/id)arg2 ;
-(NSData *)carrierToken;
-(void)authTokenChanged:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 client:(id)arg2 ;
-(id)init;
-(BOOL)refreshCarrierToken;
-(CTServiceDescriptor *)descriptor;
-(id<CTSubscriberDelegate>)delegate;
-(void)authenticate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)typeAllocationCode;
-(NSString *)identifier;
-(void)setDelegate:(id<CTSubscriberDelegate>)arg1 ;
@end

