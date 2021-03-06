/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_xpc_object;
@class ML3MusicLibrary, NSObject;

@interface ML3MaintenanceTasksOperation : NSOperation {

	ML3MusicLibrary* _library;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                      //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(ML3MusicLibrary *)library;
-(void)main;
-(NSObject*<OS_xpc_object>)activity;
-(id)initWithLibrary:(id)arg1 activity:(id)arg2 ;
@end

