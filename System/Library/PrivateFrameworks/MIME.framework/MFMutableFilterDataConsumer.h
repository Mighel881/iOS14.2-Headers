/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MFBaseFilterDataConsumer.h>
#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class MFLock, NSString;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {

	id<MFGuaranteedCollectingDataConsumer> _mainConsumer;
	MFLock* _consumerLock;
	BOOL _isDone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)done;
-(void)addDataConsumer:(id)arg1 ;
-(id)initWithMainConsumer:(id)arg1 ;
-(id)data;
-(long long)appendData:(id)arg1 ;
@end
