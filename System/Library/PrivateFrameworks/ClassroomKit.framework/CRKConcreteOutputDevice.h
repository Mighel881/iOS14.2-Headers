/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKOutputDevice.h>

@class NSString, AVOutputDevice, AVOutputContext;

@interface CRKConcreteOutputDevice : NSObject <CRKOutputDevice> {

	AVOutputDevice* _outputDevice;
	AVOutputContext* _outputContext;

}

@property (nonatomic,readonly) AVOutputDevice * outputDevice;                //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) AVOutputContext * outputContext;              //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
+(id)outputOptionsWithPassword:(id)arg1 suppressPrompt:(BOOL)arg2 ;
-(NSString *)identifier;
-(AVOutputContext *)outputContext;
-(AVOutputDevice *)outputDevice;
-(void)displayToDeviceWithPassword:(id)arg1 suppressPrompt:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithOutputDevice:(id)arg1 outputContext:(id)arg2 ;
@end

