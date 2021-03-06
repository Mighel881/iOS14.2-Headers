/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSJSCallbackHandlerErrorReporter;
#import <SafariShared/SafariShared-Structs.h>
@class JSValue;

@interface WBSJSCallbackHandler : NSObject {

	OpaqueJSValueRef _callbackFunction;
	OpaqueJSValueRef _rejectFunction;
	id<WBSJSCallbackHandlerErrorReporter> _errorReporter;
	JSRetainPtr<OpaqueJSContext *>* _globalContext;

}

@property (nonatomic,readonly) OpaqueJSContextRef globalContext; 
@property (nonatomic,readonly) JSValue * jsValue; 
-(id)call;
-(JSValue *)jsValue;
-(OpaqueJSContextRef)globalContext;
-(id)initWithCallbackFunction:(OpaqueJSValueRef)arg1 errorReporter:(id)arg2 context:(OpaqueJSContextRef)arg3 ;
-(id)initWithErrorReporter:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)initWithPromiseResolveFunction:(OpaqueJSValueRef)arg1 rejectFunction:(OpaqueJSValueRef)arg2 context:(OpaqueJSContextRef)arg3 ;
-(void)reportErrorWithMessage:(id)arg1 ;
-(id)callWithArgument:(id)arg1 ;
-(id)callWithArgument:(id)arg1 argument:(id)arg2 ;
-(id)callWithArgument:(id)arg1 argument:(id)arg2 argument:(id)arg3 ;
-(void)dealloc;
@end

