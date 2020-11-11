/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDebugCommandEncoder <MTLCommandEncoder>
@optional
-(void)startCapture;
-(void)stopCapture;
-(void)startCaptureWithSettings:(const char*)arg1 from:(const char*)arg2;
-(void)startCaptureWithSettings:(const char*)arg1;
-(void)stopCapture:(const char*)arg1;
-(unsigned)getLastStartStopCaptureResult;
-(void)dumpBuffer:(id)arg1 name:(const char*)arg2;
-(void)dumpBuffer:(id)arg1;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2 glMode:(BOOL)arg3;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2;
-(void)dumpTexture:(id)arg1;
-(void)postFinishEvent:(const char*)arg1;
-(void)postFinishEvent;

@required
-(void)IOLog:(id)arg1;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)kprintf:(id)arg1;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2;

@end
