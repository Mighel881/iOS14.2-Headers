/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;
	unsigned long long _browsedDeviceTypeMask;
	NSArray* _devices;

}

@property (assign,nonatomic) NSArray * devices;                              //@synthesize devices=_devices - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
@property (assign) unsigned long long browsedDeviceTypeMask;                 //@synthesize browsedDeviceTypeMask=_browsedDeviceTypeMask - In the implementation block
-(void)requestContentsAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)start;
-(id)init;
-(id<ICDeviceBrowserDelegate>)delegate;
-(BOOL)isBrowsing;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(id)internalDevices;
-(id)contentsAuthorizationStatus;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)isSuspended;
-(void)stop;
-(unsigned long long)browsedDeviceTypeMask;
-(id)controlAuthorizationStatus;
-(NSArray *)devices;
-(void)requestControlAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)setBrowsedDeviceTypeMask:(unsigned long long)arg1 ;
-(void)dealloc;
@end

