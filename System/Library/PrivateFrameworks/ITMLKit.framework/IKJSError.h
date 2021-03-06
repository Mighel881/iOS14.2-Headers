/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSError.h>
@class NSNumber, NSString, NSDictionary, IKJSError;


@protocol IKJSError <JSExport>
@property (nonatomic,readonly) NSNumber * code; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSString * failureReason; 
@property (nonatomic,readonly) NSString * recoverySuggestion; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) IKJSError * underlyingError; 
@required
-(NSDictionary *)userInfo;
-(NSString *)failureReason;
-(NSNumber *)code;
-(NSString *)description;
-(NSString *)domain;
-(IKJSError *)underlyingError;
-(NSString *)recoverySuggestion;

@end


@class NSNumber, NSString, NSDictionary, NSError;

@interface IKJSError : IKJSObject <IKJSError> {

	IKJSError* _jsUnderlyingError;
	NSError* _wrappedError;

}

@property (nonatomic,readonly) NSError * wrappedError;                     //@synthesize wrappedError=_wrappedError - In the implementation block
@property (nonatomic,readonly) NSNumber * code; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSString * failureReason; 
@property (nonatomic,readonly) NSString * recoverySuggestion; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) IKJSError * underlyingError; 
-(NSDictionary *)userInfo;
-(NSString *)failureReason;
-(NSNumber *)code;
-(NSString *)description;
-(NSString *)domain;
-(IKJSError *)underlyingError;
-(id)initWithError:(id)arg1 appContext:(id)arg2 ;
-(NSError *)wrappedError;
-(NSString *)recoverySuggestion;
@end

