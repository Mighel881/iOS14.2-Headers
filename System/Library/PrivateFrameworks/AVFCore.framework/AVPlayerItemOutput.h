/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {

	AVPlayerItemOutputInternal* _outputInternal;

}

@property (assign,nonatomic) BOOL suppressesPlayerRendering; 
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(id)init;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(BOOL)suppressesPlayerRendering;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(id)_weakReference;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(SCD_Struct_AV6)_itemTimeForHostTimeAsCMTime:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)itemTimeForHostTime:(double)arg1 ;
-(SCD_Struct_AV6)itemTimeForMachAbsoluteTime:(long long)arg1 ;
-(void)dealloc;
@end

