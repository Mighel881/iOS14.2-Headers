/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDIUnknown2.h>

@interface IOHIDPlugin : IOHIDIUnknown2 {

	IOCFPlugInInterfaceStruct* _plugin;

}
-(id)init;
-(int)stop;
-(void)dealloc;
-(int)probe:(id)arg1 service:(unsigned)arg2 outScore:(int*)arg3 ;
-(int)start:(id)arg1 service:(unsigned)arg2 ;
@end

