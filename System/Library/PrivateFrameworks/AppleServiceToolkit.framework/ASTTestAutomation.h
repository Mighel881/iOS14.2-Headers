/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ASTTestAutomation : NSObject {

	BOOL _testAutomationEnabled;

}

@property (assign,nonatomic) BOOL testAutomationEnabled;              //@synthesize testAutomationEnabled=_testAutomationEnabled - In the implementation block
+(id)sharedInstance;
+(void)postServerResponse:(id)arg1 ;
+(void)postServerRequest:(id)arg1 ;
-(id)init;
-(BOOL)testAutomationEnabled;
-(void)setTestAutomationEnabled:(BOOL)arg1 ;
@end
