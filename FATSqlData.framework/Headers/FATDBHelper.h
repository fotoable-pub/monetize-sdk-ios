//
//  JKDataBase.h
//  JKBaseModel
//
//  Created by zx_04 on 15/6/24.
//
//  github:https://github.com/Joker-King/JKDBModel

#import <Foundation/Foundation.h>
#import "FATFMDB.h"

@interface FATDBHelper : NSObject

@property (nonatomic, retain, readonly) FATDatabaseQueue *dbQueue;

+ (FATDBHelper *)shareInstance;

+ (NSString *)dbPath;

- (BOOL)changeDBWithDirectoryName:(NSString *)directoryName;

@end
